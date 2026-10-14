// sub_08064FDC at 0x08064FDC (thumb)

undefined4 sub_08064FDC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1302);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 5) {
    if (bVar1 < 6) {
      if (bVar1 != 0) goto LAB_08065074;
    }
    else if (bVar1 != 10) {
      if (bVar1 == 0x30) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_08065074;
    }
  }
  local_10 = *(int *)(param_1 + 0x58) + -0x1200;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_14 = *(int *)(param_1 + 0x54) + -0x1b00;
    iVar2 = sub_0809C41C(&local_14,0x240,0);
  }
  else {
    local_14 = *(int *)(param_1 + 0x54) + 0x1b00;
    iVar2 = sub_0809C41C(&local_14,0x240,0x80);
  }
  if (iVar2 != 0) {
    sub_0800471C(0x2c);
  }
LAB_08065074:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

