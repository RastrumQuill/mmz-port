// sub_080A1208 at 0x080A1208 (thumb)

undefined4 sub_080A1208(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080a124c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x13) =
       (char)*(undefined2 *)(&DAT_083445ac + (uint)*(byte *)(param_1 + 0x12) * 4);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083445aa + (uint)*(byte *)(param_1 + 0x12) * 4));
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a124c:
  sub_080128D4(param_1);
  if (((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) &&
     (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x03') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

