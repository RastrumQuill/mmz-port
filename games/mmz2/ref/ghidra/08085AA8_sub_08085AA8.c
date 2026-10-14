// sub_08085AA8 at 0x08085AA8 (thumb)

undefined4 sub_08085AA8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x720d);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(byte *)(param_1 + 0x12) & 0x3f) == 0) &&
     (uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar2 & 0x7fffffff,
     (uVar2 * 2 >> 0x11 & 3) == 0)) {
    local_10 = *(int *)(param_1 + 0x54) + -0x1000;
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_08086220(&local_10,0x200,1,3);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
      return in_lr;
    }
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x720d) ||
       (uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar2 & 0x7fffffff,
       (uVar2 * 2 >> 0x11 & 1) == 0)) {
      uVar3 = 0x720e;
    }
    else {
      uVar3 = 0x720d;
    }
    sub_080127E4(param_1,uVar3);
    cVar1 = ' ';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
  }
  *(char *)(param_1 + 0x12) = cVar1;
  return in_lr;
}

