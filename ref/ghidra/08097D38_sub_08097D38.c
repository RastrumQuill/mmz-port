// sub_08097D38 at 0x08097D38 (thumb)

undefined4 sub_08097D38(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080033F0(param_1 + 0x6c,0);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '(') {
      sub_080033F0(param_1 + 0x6c,1);
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (0x50 < *(byte *)(param_1 + 0x12)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

