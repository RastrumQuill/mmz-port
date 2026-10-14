// sub_0806B7BC at 0x0806B7BC (thumb)

undefined4 sub_0806B7BC(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((*(char *)(*(int *)(param_1 + 0xc4) + 0xdc) != '\0') && (*(char *)(param_1 + 0x11) != '\0'))
     || ((*(char *)(*(int *)(param_1 + 0xc4) + 0xdd) != '\0' && (*(char *)(param_1 + 0x11) == '\0'))
        )) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080699C0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  switch((uint)*(byte *)(param_1 + 0x12) - (uint)*(byte *)(param_1 + 0x10)) {
  case 0:
    if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) break;
    cVar2 = *(char *)(param_1 + 0x70);
    cVar1 = sub_080C8CB0(cVar2,3);
    if (cVar1 != '\0') break;
    cVar2 = cVar2 + '\x01';
    goto LAB_0806b966;
  case 4:
    if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) break;
    cVar2 = *(char *)(param_1 + 0x70);
    cVar1 = sub_080C8CB0(cVar2,3);
    if (cVar1 != '\x01') break;
    cVar2 = cVar2 + '\x01';
    goto LAB_0806b966;
  case 8:
    bVar3 = *(byte *)(param_1 + 10) >> 4;
    if (*(byte *)(param_1 + 0x11) != (bVar3 & 1)) {
      bVar3 = (bVar3 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar3;
      if (bVar3 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    break;
  case 0xc:
    cVar2 = *(char *)(param_1 + 0x70);
    cVar1 = sub_080C8CB0(cVar2,3);
    if (cVar1 != '\x02') break;
    goto LAB_0806b964;
  case 0x10:
    cVar2 = *(char *)(param_1 + 0x70);
    cVar1 = sub_080C8CB0(cVar2,3);
    if (cVar1 != '\x01') break;
LAB_0806b964:
    cVar2 = cVar2 + -1;
LAB_0806b966:
    sub_080033F0(param_1 + 0x6c,cVar2);
    break;
  case 0x14:
    if (*(char *)(param_1 + 0x70) == '\0') {
      sub_080033F0(param_1 + 0x6c,3);
    }
    else if (*(char *)(param_1 + 0x70) == '\f') {
      sub_080033F0(param_1 + 0x6c,9);
    }
    break;
  case 0x18:
    if ((*(char *)(param_1 + 0x70) == '\x03') || (*(char *)(param_1 + 0x70) == '\t')) {
      sub_080033F0(param_1 + 0x6c,6);
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sub_0806BA20(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '@') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      iVar4 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
    }
  }
  return in_lr;
}

