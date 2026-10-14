// sub_0807B128 at 0x0807B128 (thumb)

undefined4 sub_0807B128(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363ff4);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0x4000);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x06';
  iVar2 = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 2);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x60;
  sVar1 = sub_08009A3C();
  if (sVar1 == 0) {
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
  }
  return in_lr;
}

