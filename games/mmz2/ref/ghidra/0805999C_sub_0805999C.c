// sub_0805999C at 0x0805999C (thumb)

undefined4 sub_0805999C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    if (((*(uint *)(iVar1 + 0x8c) & 0x200) == 0) && (*(short *)(iVar1 + 0xa4) != 0)) {
      uVar2 = 0xfffffe20;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar2 = 0x1e0;
      }
      sub_08022EA8(iVar1,0,uVar2,0xfffffa00,0,0x20,0xffffffff,0);
    }
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

