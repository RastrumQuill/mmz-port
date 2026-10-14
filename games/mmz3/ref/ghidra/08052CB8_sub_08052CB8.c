// sub_08052CB8 at 0x08052CB8 (thumb)

undefined4 sub_08052CB8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 200) == '\0') {
      sub_08017700(param_1,0xb002);
      sub_08007390(param_1 + 0x74,&DAT_083601b8);
    }
    else {
      sub_08017700(param_1,0xb001);
      sub_08007390(param_1 + 0x74,&DAT_083601b8);
    }
    if (*(char *)(param_1 + 0xf) == -1) {
      *(undefined *)(param_1 + 0x12) = 1;
      *(undefined *)(param_1 + 0xf) = 0x7f;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 0x10;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 200) == '\0') {
    sub_080546C4(param_1);
  }
  else {
    sub_080546C4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 4;
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    if ((*(char *)(param_1 + 0xf) == '\x7f') &&
       (uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar3 & 0x7fffffff,
       (uVar3 * 2 >> 0x11 & 1) == 0)) {
      bVar2 = 6;
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      pcVar4 = (char *)(param_1 + 0xb5);
      if (*pcVar4 == *(char *)(param_1 + 0xb6)) {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar5 = sub_080546B0(param_1);
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          iVar6 = sub_080FE4D8(uVar3 * 2 >> 0x11,(&DAT_080feb10)[iVar5 * 0x11]);
          bVar2 = (&UNK_080feb11)[iVar6 + iVar5 * 0x11];
          if ((uint)bVar2 == (int)*pcVar4) {
            bVar2 = sub_08054608(param_1,(uint)bVar2,0);
          }
        }
        else {
          iVar5 = sub_080546B0(param_1);
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          iVar6 = sub_080FE4D8(uVar3 * 2 >> 0x11,(&DAT_080feb32)[iVar5 * 0x11]);
          bVar2 = (&UNK_080feb33)[iVar6 + iVar5 * 0x11];
          if ((uint)bVar2 == (int)*pcVar4) {
            bVar2 = sub_08054608(param_1,(uint)bVar2,1);
          }
        }
      }
      else {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar5 = sub_080546B0(param_1);
          puVar7 = &DAT_080feb10;
        }
        else {
          iVar5 = sub_080546B0(param_1);
          puVar7 = &DAT_080feb32;
        }
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        iVar6 = sub_080FE4D8(uVar3 * 2 >> 0x11,puVar7[iVar5 * 0x11]);
        bVar2 = puVar7[iVar6 + iVar5 * 0x11 + 1];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb5);
    *(byte *)(param_1 + 0xb5) = bVar2;
  }
  return in_lr;
}

