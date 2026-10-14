// sub_08072694 at 0x08072694 (thumb)

undefined4 sub_08072694(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x200) != 0) {
    if ((uVar2 & 0x10000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if ((uVar2 & 0x8000) != 0) {
        uVar3 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080727A8(param_1);
    return in_lr;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(char *)(param_1 + 0xb8) = '\0';
    sub_08006E08(param_1 + 0x74,&DAT_0833f0c4 + (uint)*(byte *)(param_1 + 0xb5) * 0x30);
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0xb8);
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    if (*pcVar4 != '\0') goto LAB_08072780;
    iVar1 = sub_0801E11C(0,param_1,&UNK_0833f094 + (uint)*(byte *)(param_1 + 0xb5) * 8);
    *(int *)(param_1 + 0x2c) = iVar1;
    if ((iVar1 != 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      *pcVar4 = 'X';
    }
  }
  if (*pcVar4 == '\0') {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833f064 + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_08072780:
  sub_080732F4(param_1);
  return in_lr;
}

