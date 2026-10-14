// sub_080811BC at 0x080811BC (thumb)

undefined4 sub_080811BC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 4;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    cVar2 = *(char *)(iVar3 + 0xd);
    if ((cVar2 == '\x03') || (cVar2 == '\x13')) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b2888,param_1 + 0x4c,2);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x100;
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 4;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if ((bVar1 & 0xf) == 0) {
      sub_08096D70(param_1,0);
    }
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      sub_0808827C(3,param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  if ((*(char *)(param_1 + 0xd) != '\0') && ((*(ushort *)(param_1 + 0x90) & 0x40) != 0)) {
    sub_08001EAC(0x95);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08096D70(param_1,1);
  }
  return in_lr;
}

