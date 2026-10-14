// sub_08028C48 at 0x08028C48 (thumb)

undefined4 sub_08028C48(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x150;
  sub_0801F5B8(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  uVar2 = (uint)*(byte *)(param_1 + 0x184);
  if ((uVar2 < 0xf0) || (iVar1 = sub_08037EC8(param_1,2,0), iVar1 == 0)) {
    uVar2 = uVar2 - 1;
    *(byte *)(param_1 + 0x184) = (byte)uVar2;
    if (uVar2 < 200) {
      *(undefined *)(param_1 + 0xf) = 2;
    }
    if ((uVar2 & 1) == 0) {
      *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 0x80;
    }
    else {
      *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) & 0x7f;
    }
  }
  return in_lr;
}

