#pragma once
#ifndef _ALGO_H

namespace own {
	template <class T>

	class Algo {
		private:
			static void swap(T* n1, T* n2) {
				T* temp = n1;
				n1 = n2;
				n2 = temp;
			}
			static T partition(int arr[], int start, int end) {
				T pivot = arr[end];

				int i = (start - 1);

				for (int j = start; j <= end - 1; j++) {
					if (arr[j] < pivot) {
						i++;
						swap(&arr[i], &arr[j]);
					}
				}
				swap(&arr[i + 1], &arr[end]);
				return (i + 1);
			}
			static void qSort(T arr[], int start, int end) {
				if (start < end) {
					T pi = partition(arr, start, end);

					qSort(arr, start, pi - 1);
					qSort(arr, pi + 1, end);
				}
			}
		public:
			static void Sort(T arr[], int n) {
				qSort(arr, 0, n-1);
				for (int i = 0; i < n; i++) {
					std::cout << arr[i];
				}

			}
			
	};

}

#endif // !_ALGO_H
