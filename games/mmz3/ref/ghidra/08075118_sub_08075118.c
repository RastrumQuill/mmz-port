// sub_08075118 at 0x08075118 (thumb)

undefined4 sub_08075118(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080175BC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_08363824,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80757ed;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 0xc2) = 0;
      *(undefined *)(param_1 + 0xb4) = 2;
      *(undefined4 *)(param_1 + 0x5c) = 0x1a00;
      *(undefined *)(param_1 + 0xb5) = 0;
      iVar1 = *(int *)(param_1 + 0x54) + -0x800;
      *(int *)(param_1 + 0x54) = iVar1;
      iVar1 = sub_0800A2CC(iVar1,*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar1 + 0x4c00;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      iVar1 = sub_0800A2CC();
      *(int *)(param_1 + 0x68) = iVar1;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x58) - iVar1;
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080BB7C0(&local_18,param_1,0);
      if (*(char *)(param_1 + 0x11) == '\x01') {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        goto LAB_08075228;
      }
    }
  }
  sub_080750BC(param_1,*(undefined *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
LAB_08075228:
  sub_0807523C(param_1);
  return in_lr;
}

