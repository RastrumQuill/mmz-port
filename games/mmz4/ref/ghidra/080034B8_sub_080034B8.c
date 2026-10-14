// sub_080034B8 at 0x080034B8 (thumb)

undefined4 sub_080034B8(int *param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = 0;
  cVar2 = *(char *)(*(int *)((uint)param_2 * 4 + *param_1) + 1) + '\x01';
  *(char *)((int)param_1 + 6) = cVar2;
  cVar1 = *(char *)(*(int *)((uint)*(byte *)(param_1 + 1) * 4 + *param_1) + 3);
  if (cVar1 < '\0') {
    if (cVar2 == '\x02') {
      *(undefined *)((int)param_1 + 7) = 2;
    }
    else if (cVar2 == '\x01') {
      if (cVar1 == -1) {
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

