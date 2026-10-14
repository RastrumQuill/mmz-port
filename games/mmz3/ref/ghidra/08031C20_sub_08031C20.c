// sub_08031C20 at 0x08031C20 (thumb)

undefined4 sub_08031C20(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xc0) == '\x03') {
    cVar2 = sub_08034598(param_1,0);
    if ((*(uint *)(param_1 + 0x218) & 0x2000) == 0) {
      if (*(char *)(param_1 + 0x225) == '\x03') {
        pbVar5 = (byte *)(param_1 + 0x226);
        *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
        if ((*pbVar5 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        cVar2 = '\x02';
      }
      if (((*(ushort *)(param_1 + 0xc6) & 0x800) != 0) && (*(char *)(param_1 + 0x22d) == '\x03')) {
        pbVar5 = (byte *)(param_1 + 0x22e);
        *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
        if ((*pbVar5 & 1) == 0) {
LAB_08031df4:
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
LAB_08031dfa:
        *(byte *)(param_1 + 10) = bVar3;
        cVar2 = '\x02';
        bVar1 = true;
      }
    }
    else {
LAB_08031d30:
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = sub_08034598(param_1,1);
    if ((*(uint *)(param_1 + 0x218) & 0x8000) != 0) goto LAB_08031d30;
    if (*(char *)(param_1 + 0x225) == '\x03') {
      pbVar5 = (byte *)(param_1 + 0x226);
      *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
      if ((*pbVar5 & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      cVar2 = '\x02';
    }
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) != 0) && (*(char *)(param_1 + 0x22d) == '\x03')) {
      pbVar5 = (byte *)(param_1 + 0x22e);
      *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
      if ((*pbVar5 & 1) == 0) goto LAB_08031df4;
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08031dfa;
    }
  }
  if (cVar2 == '\x02') {
    if (((*(ushort *)(param_1 + 0xc6) & 0x800) != 0) &&
       (((*(uint *)(param_1 + 0x218) & 0x80) != 0 || (bVar1)))) {
      *(undefined *)(param_1 + 0xed) = 5;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_080321E4(param_1);
      return in_lr;
    }
    if ((*(ushort *)(param_1 + 0xc6) & 0x400) != 0) {
      *(undefined *)(param_1 + 0xed) = 4;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_08032114(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xed) = 3;
    *(byte *)(param_1 + 0xee) = ((byte)(*(ushort *)(param_1 + 0xc6) >> 8) & 4) >> 2;
    sub_08032044(param_1);
    return in_lr;
  }
  cVar2 = sub_080341A4(param_1,0);
  if (cVar2 == '\x02') {
    *(undefined *)(param_1 + 0xed) = 1;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_08031EFC(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_08031ee8;
    }
    uVar4 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_08031ee8;
    }
    uVar4 = 0x705;
  }
  sub_080177CC(param_1,uVar4,1,1);
LAB_08031ee8:
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

