// sub_0802F078 at 0x0802F078 (thumb)

undefined4 sub_0802F078(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xa01) {
    sub_080177CC(param_1,0xa01,2,*(undefined *)(param_1 + 0x129));
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    sub_08017700(param_1,0x300);
  }
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    if (((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) &&
       ((*(char *)(param_1 + 0xc5) == '\x03' || (*(char *)(param_1 + 0xc5) == '\a')))) {
      uVar2 = sub_08032F3C(param_1);
      sub_080258F0(param_1,uVar2);
      *(undefined *)(param_1 + 0x147) = 1;
    }
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802EEE4(param_1);
  }
  return in_lr;
}

