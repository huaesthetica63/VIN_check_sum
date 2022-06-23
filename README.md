# VIN_check_sum
### Program for computing VIN number's checksum (ISO 3779)
### Программа для вычисления контрольной суммы в VIN-коде автомобиля по стандарту ISO 3779

Программа берет в качестве входных данных строку с 17-значным VIN-номером автомобиля, который должен соответствовать стандарту ISO 3779,
то есть, содержать только допустимые символы: цифры (0-9), а также буквы латинского алфавита за некоторым исключением (например, символ "Q", не встречается
в реальных номерах), на девятой позиции обычно располагается проверочное число - контрольная сумма, которая позволяет верифицировать номер, понять,
корректен он или нет. Такой метод проверки применим для всех автомобилей североамериканского рынка, для всех а/м BMW (в т.ч. в Европе), а также для некоторых
марок японского производства. Если на месте контрольного символа располагается не цифра и не символ "X" (обозначение 10 для суммы), что часто бывает
у автомобилей европейского рынка и СНГ, то такой метод проверки не применим, поэтому вычисление контрольной суммы здесь бессмысленно. 

Программа содержит функцию проверки строки на корректный ввод, функцию перевода строки в массив чисел (по алгоритму вычисления суммы требуется перевести все
буквенные символы в числа по специальным таблицам соответствия), а также саму функцию вычисления контрольной суммы (вычисляется сумма произведений, которая
делится по модулю на 11). 

<img width="236" alt="image" src="https://user-images.githubusercontent.com/46458667/175407439-01f9d980-8b1f-4b8a-be32-85288830fbad.png">

Пример работы программы представлен выше.

По большей части данный код написан для демонстрации одного из простейших алгоритмов вычисления контрольных сумм для проверки целостности данных, 
но при некоторых доработках его можно использовать и в практических целях. 
