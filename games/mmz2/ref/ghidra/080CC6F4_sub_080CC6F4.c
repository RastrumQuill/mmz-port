// sub_080CC6F4 at 0x080CC6F4 (thumb)

undefined4 sub_080CC6F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08349410;
      *(undefined2 *)(param_1 + 0x26) = 0x2001;
      sub_08006E08(param_1 + 0x74,&DAT_083492dc);
      sub_080127E4(param_1,0x6917);
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_08349410;
      *(undefined2 *)(param_1 + 0x26) = 0x2001;
      sub_08006E08(param_1 + 0x74,&DAT_0834939c);
      sub_080127E4(param_1,0x6919);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 100) =
         (uint)(*(byte *)(param_1 + 0xb4) ^ *(byte *)(param_1 + 0x12)) * -0x40 + 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080cc8ba;
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  if (iVar2 + 0x400U < 0x800) {
    *(int *)(param_1 + 0x5c) = iVar2 + *(int *)(param_1 + 100);
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar3 = *(int *)(iVar3 + 0x54) + 0x800;
      if (*(int *)(param_1 + 0x54) < iVar3) {
        *(int *)(param_1 + 0x54) = iVar3;
        uVar1 = 1;
LAB_080cc87e:
        sub_080CBCB0(param_1,uVar1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        goto LAB_080cc89a;
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x54) + -0x800;
      if (iVar3 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar3;
        uVar1 = 0;
        goto LAB_080cc87e;
      }
    }
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = sub_08009240(*(int *)(param_1 + 0x54) + -0x1a00,*(undefined4 *)(param_1 + 0x58));
    if (0 < iVar3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      sub_080CBCB0(param_1,1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      goto LAB_080cc89a;
    }
  }
  else {
    iVar3 = sub_080090D4(*(int *)(param_1 + 0x54) + 0x1a00,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      sub_080CBCB0(param_1,1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
LAB_080cc89a:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  sub_080128D4(param_1);
LAB_080cc8ba:
  if ((*(uint *)(param_1 + 0x8c) & 0x24) != 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  return in_lr;
}

