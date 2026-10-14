// sub_08088078 at 0x08088078 (thumb)

undefined4 sub_08088078(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6b0a);
    if ((*(uint *)(iVar4 + 0xb4) & 0x1000) == 0) {
      uVar1 = 0xffffff00;
    }
    else {
      uVar1 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xb4) * -0x600 + 0x300;
    *(undefined4 *)(param_1 + 100) = 0xffffffd0;
    *(uint *)(param_1 + 100) = (uint)*(byte *)(param_1 + 0xb4) * 0x60 + -0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((iVar2 < 0) && (iVar3 < *(int *)(iVar4 + 0xb8))) {
      sub_080032EC(0xe5);
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0xb8);
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if ((0 < iVar2) && (*(int *)(iVar4 + 0xb8) < iVar3)) {
    sub_080032EC(0xe5);
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0xb8);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  sub_08006E08(param_1 + 0x74,
               &DAT_08341658 + (uint)(byte)(&DAT_0834171e)[*(char *)(param_1 + 0x71)] * 0x30);
  return in_lr;
}

