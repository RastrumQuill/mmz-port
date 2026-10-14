// sub_08028238 at 0x08028238 (thumb)

undefined4 sub_08028238(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = 0x80;
    if (-1 < *(int *)(param_1 + 0x60)) goto LAB_08028272;
  }
  else {
    iVar1 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar1 = 1;
    }
    uVar2 = 0x80;
    if (iVar1 * *(int *)(param_1 + 0x5c) < 1) goto LAB_08028272;
  }
  uVar2 = 0x83;
LAB_08028272:
  sub_0801E9FC(param_1,uVar2);
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  return in_lr;
}

