// sub_080070DC at 0x080070DC (thumb)

undefined4 sub_080070DC(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = sub_08006AA4(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  uVar2 = *(undefined4 *)
           ((DAT_02005208 >> ((uVar1 & 0x7f) << 1) & 3) * 4 + (&DAT_08293bec)[uVar1 & 0xff]);
  iVar4 = 0;
  iVar3 = 2;
  do {
    *(undefined4 *)((int)&DAT_0200501c + iVar4) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)&DAT_02005020 + iVar4) = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)((int)&DAT_02004ff4 + iVar4) != 0) {
      sub_080C8A9C((int)&DAT_02004ff0 + iVar4,uVar2);
    }
    iVar4 = iVar4 + 0x70;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  sub_08001574(&DAT_02021650,((ushort)(&DAT_02004f34)[DAT_02005044 >> 4] & 0x1f00) << 3);
  sub_08007178(param_2);
  return in_lr;
}

