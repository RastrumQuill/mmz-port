// sub_080972E8 at 0x080972E8 (thumb)

undefined4 sub_080972E8(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9c08);
    sub_08006E08(param_1 + 0x74,&DAT_08342f54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffe80;
    }
    else {
      uVar2 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    }
    uVar2 = sub_080ABE84(param_1,0,0x9c05);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(byte *)(param_1 + 0xbd) < 4) {
    if (*(int *)(param_1 + 0x5c) < 1) {
      if (*(int *)(param_1 + 0xb4) + -0x4000 <= iVar3) {
        return in_lr;
      }
    }
    else if (iVar3 <= *(int *)(param_1 + 0xb4) + 0x4000) {
      return in_lr;
    }
    uVar1 = 7;
  }
  else {
    uVar1 = 9;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

