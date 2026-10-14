// sub_08045D50 at 0x08045D50 (thumb)

undefined4 sub_08045D50(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ebbc = DAT_0202ebbc | 8;
    sub_080127E4(param_1,0xa002);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar2 = sub_080032EC(0x4e);
      *(undefined2 *)(param_1 + 0xcc) = uVar2;
      uVar3 = sub_08072398(param_1,1);
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
      *(undefined *)(param_1 + 0x12) = 0x18;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = *(int *)(param_1 + 0x54) + -0x2500;
        cVar1 = *(char *)(param_1 + 0x13) + -9;
      }
      else {
        local_14 = *(int *)(param_1 + 0x54) + 0x2500;
        cVar1 = *(char *)(param_1 + 0x13) + '\t';
      }
      *(char *)(param_1 + 0x13) = cVar1;
      local_10 = *(int *)(param_1 + 0x58) + -0x1700;
      if ((*(byte *)(param_1 + 0x12) & 3) == 2) {
        sub_080B3AD8(&local_14,2,*(undefined *)(param_1 + 0x13));
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        sub_080B3AD8(&local_14,2,uVar4 * 2 >> 0x11 & 0xff);
      }
      else {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        sub_080B3AD8(&local_14,2,uVar4 * 2 >> 0x11 & 0xff);
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

