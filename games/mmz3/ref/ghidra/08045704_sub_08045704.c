// sub_08045704 at 0x08045704 (thumb)

undefined4 sub_08045704(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = sub_080047C0(0x7f);
    if (iVar3 != 0) {
      sub_08004768(0x7f);
    }
    if ((DAT_02002650 & 0x7f) == 0xd) {
      iVar3 = 0x2d024;
    }
    else {
      iVar3 = 0x2d026;
    }
    (&DAT_02002480)[iVar3] = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0800471C(0x81);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    cVar1 = *(char *)(param_1 + 0xd0);
    if ((cVar1 == '\x05') || (cVar1 == '\t')) {
      *(char *)(param_1 + 0xd) = cVar1;
      *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0xd1);
      uVar2 = *(undefined *)(param_1 + 0xd2);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar2 = 0xff;
    }
    *(undefined *)(param_1 + 0xf) = uVar2;
  }
  return in_lr;
}

