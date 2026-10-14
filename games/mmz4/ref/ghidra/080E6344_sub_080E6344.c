// sub_080E6344 at 0x080E6344 (thumb)

undefined4 sub_080E6344(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0xc601);
  *(undefined *)(param_1 + 0x12) = 0x50;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar1 = 0x40;
  }
  else {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    uVar2 = (*(byte *)(param_1 + 0x11) - 1) * 0x40 + (uVar2 * 2 >> 0x11 & 0x6f);
    iVar1 = (int)*(short *)((int)&DAT_08128c10 + (uVar2 * 0x1000000 + 0x40000000 >> 0x17));
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 2;
    iVar1 = (int)(short)(&DAT_08128c10)[uVar2 & 0xff];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    iVar1 = iVar1 >> 2;
  }
  *(int *)(param_1 + 0x60) = iVar1;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

