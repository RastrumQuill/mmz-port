// sub_080EF1E4 at 0x080EF1E4 (thumb)

undefined4 sub_080EF1E4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,0x7c00);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0xffffffe0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffce0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080ef268;
  if (-800 < *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) || (0x2000 < DAT_0202ea30 - (iVar2 + 0x7800)))
  {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080ED1F0(param_1);
  }
LAB_080ef268:
  if (*(char *)(param_1 + 0x11) == '\x01') {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) != 0) {
      sub_0801CFF0(param_1);
    }
  }
  else {
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

