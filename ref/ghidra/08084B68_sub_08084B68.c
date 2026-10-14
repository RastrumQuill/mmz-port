// sub_08084B68 at 0x08084B68 (thumb)

undefined4 sub_08084B68(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 7) == 0) {
    sub_080842BC(param_1,6,1);
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sub_080842BC(param_1,5,0x6b);
        sub_080842BC(param_1,5,0x55);
        sub_080842BC(param_1,5,0x40);
        sub_080842BC(param_1,5,0x2b);
        sub_080842BC(param_1,5,0x15);
      }
      else {
        sub_080842BC(param_1,5,0xeb);
        sub_080842BC(param_1,5,0xd5);
        sub_080842BC(param_1,5,0xc0);
        sub_080842BC(param_1,5,0xab);
        sub_080842BC(param_1,5,0x95);
      }
    }
    else {
      sub_080842BC(param_1,5,0x2b);
      sub_080842BC(param_1,5,0x15);
      sub_080842BC(param_1,5,0);
      sub_080842BC(param_1,5,0xea);
      sub_080842BC(param_1,5,0xd4);
    }
    sub_08001EAC(0x95);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

