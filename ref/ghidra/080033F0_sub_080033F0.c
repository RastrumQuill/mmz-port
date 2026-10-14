// sub_080033F0 at 0x080033F0 (thumb)

undefined4 sub_080033F0(int *param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = 0;
  piVar1 = (int *)((uint)param_2 * 4 + *param_1);
  cVar2 = *(char *)(*piVar1 + 1) + '\x01';
  *(char *)((int)param_1 + 6) = cVar2;
  if (*(char *)(*piVar1 + 5) < '\0') {
    if (cVar2 == '\x02') {
      *(undefined *)((int)param_1 + 7) = 2;
    }
    else if (cVar2 == '\x01') {
      if (*(char *)(*(int *)((uint)*(byte *)(param_1 + 1) * 4 + *param_1) + 5) == -1) {
        *(undefined *)((int)param_1 + 7) = 3;
      }
      else {
        *(undefined *)((int)param_1 + 7) = 4;
      }
    }
    else {
      *(undefined *)((int)param_1 + 7) = 1;
    }
  }
  else {
    *(undefined *)((int)param_1 + 7) = 0;
  }
  return in_lr;
}

