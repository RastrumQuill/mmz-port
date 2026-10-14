// sub_0805927C at 0x0805927C (thumb)

undefined4 sub_0805927C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080127E4(param_1,0xa70e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + -0x30;
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 < -0x200) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x6000 < uVar2) {
    sub_08002638(&DAT_0843319c,(DAT_0202e606 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084331a8,(DAT_0202e406 - 6) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc4) = 4;
  }
  sub_080128D4(param_1);
  return in_lr;
}

