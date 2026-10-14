// sub_08069820 at 0x08069820 (thumb)

undefined4 sub_08069820(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x509);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    sub_08002D68(4,0x2a0);
    *(undefined *)(param_1 + 0xbc) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080032EC(0x52);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08002EA0(4);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (0xc800 < iVar2 - *(int *)(iVar3 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x18 < bVar1) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

