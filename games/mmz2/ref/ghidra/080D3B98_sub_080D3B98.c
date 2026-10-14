// sub_080D3B98 at 0x080D3B98 (thumb)

undefined4 sub_080D3B98(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202ebb5 & 8;
  if ((DAT_0202ebb5 & 8) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar1;
    *(uint *)(param_1 + 0x90) = uVar1;
    *(char *)(param_1 + 0x94) = (char)uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0834a038,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x800;
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + -0x1800;
    *(int *)(param_1 + 0x40) = param_1 + 0x5c;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + 0x100;
    *(undefined2 *)(param_1 + 0xbe) =
         *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined2 *)(param_1 + 0xc0) =
         *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined2 *)(param_1 + 0xc2) =
         *(undefined2 *)(&DAT_08349fcc + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080D292C(param_1);
  }
  return in_lr;
}

