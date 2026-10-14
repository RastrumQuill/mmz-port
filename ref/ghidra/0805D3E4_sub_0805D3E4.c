// sub_0805D3E4 at 0x0805D3E4 (thumb)

undefined4 sub_0805D3E4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x78;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x4b) {
    if (bVar1 < 0x4c) {
      if ((bVar1 == 0x14) || (bVar1 != 0x3c)) goto LAB_0805d472;
    }
    else if (bVar1 != 0x5a) {
      if (bVar1 == 100) {
        sub_0800561C(param_1 + 0x74,&DAT_082b00e8);
      }
      goto LAB_0805d472;
    }
  }
  if (*(short *)(DAT_02022e98 + 10) != 3) {
    sub_08051C64(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x1000);
  }
LAB_0805d472:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b00b0);
  }
  return in_lr;
}

