// sub_08051728 at 0x08051728 (thumb)

undefined4 sub_08051728(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202ec38, (DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = (byte)(-(*(uint *)(param_1 + 0x8c) & 0x10000) >> 0x1f);
    *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
    sub_08051858(param_1);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xd0) != '\0') && (cVar2 = sub_080578B0(param_1), cVar2 != '\0')) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      if (*(char *)(param_1 + 0xd) != '\x06') {
        *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xd);
        uVar3 = 6;
        goto LAB_080517ce;
      }
    }
    else if ((*(char *)(param_1 + 0xb5) == '\x01') && (*(char *)(param_1 + 0xd) != '\x0f')) {
      *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xd);
      uVar3 = 0xf;
LAB_080517ce:
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xcf) = 0;
    bVar1 = *(byte *)(param_1 + 0xb5);
    if (bVar1 == 1) {
      if (*(char *)(param_1 + 0xd) == '\x12') goto LAB_08051834;
      uVar3 = 0x12;
    }
    else if (bVar1 < 2) {
      if (((bVar1 != 0) || (*(char *)(param_1 + 0xd) == '\t')) ||
         (*(char *)(param_1 + 0xd1) != '\0')) goto LAB_08051834;
      *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xd);
      uVar3 = 9;
    }
    else {
      if ((bVar1 != 2) || (*(char *)(param_1 + 0xd) == '\x18')) goto LAB_08051834;
      uVar3 = 0x18;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
LAB_08051834:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833c150 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined *)(param_1 + 0xdb) = 0;
  return in_lr;
}

