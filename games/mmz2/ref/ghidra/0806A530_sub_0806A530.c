// sub_0806A530 at 0x0806A530 (thumb)

undefined4 sub_0806A530(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = DAT_0202ebbb & 1;
  if ((DAT_0202ebbb & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0806a5fa;
  }
  if ((DAT_0202ebbb & 0x20) != 0) {
    sub_080942F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
LAB_0806a5e0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
LAB_0806a5fa:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0xb7) == '\0') {
      uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      uVar3 = 0;
      if (0x2000 < uVar1) goto LAB_0806a5e0;
    }
    else if ((iVar2 == 0) || (1 < *(byte *)(iVar2 + 0xc))) {
      *(char *)(param_1 + 0xb7) = '\0';
    }
    else {
      if (*(char *)(iVar2 + 0xb4) != '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        goto LAB_0806a5fa;
      }
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar2 + 0x54);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar2 + 0x58);
    }
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833e2b0);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0806a66e:
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) goto LAB_0806a682;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      iVar2 = sub_0801E11C(0,param_1,&DAT_0833e2a8);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 == 0) goto LAB_0806a682;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0806a66e;
    }
  }
  iVar2 = sub_0801E4D8(iVar2);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0806a682:
  sub_0806B0FC(param_1);
  sub_080EF118(param_1,*(undefined4 *)(&UNK_0833e290 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

