// sub_08038980 at 0x08038980 (thumb)

undefined4 sub_08038980(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = (uint)(byte)(*(char *)(iVar3 + 0x125) + 7);
    if (*(char *)(iVar3 + 0x125) != '\0') {
      sVar1 = *(short *)(&DAT_0835b838 + uVar5 * 2);
      pcVar4 = (char *)(param_1 + 0x71);
      if (sVar1 != CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))) {
        if ((sVar1 == 0x6202) && ('\x06' < *pcVar4)) {
          sub_080177CC(param_1,0x6202,7,1);
        }
        else {
          sub_080177CC(param_1,sVar1,(short)*pcVar4,(short)*(char *)(param_1 + 0x72));
        }
      }
      if (((*(char *)(param_1 + 0x10) == '\b') && (*pcVar4 == '\x03')) &&
         (*(char *)(param_1 + 0x72) < '\x02')) {
        sub_080B32B0(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      sub_080177F4(param_1);
      sub_080073A0(param_1 + 0x74,*(undefined4 *)(*pcVar4 * 4 + *(int *)(&DAT_0835ca10 + uVar5 * 4))
                   ,*(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),0xffffffff);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      if (sVar1 == 0x6202) {
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xc1) = 10;
        cVar2 = sub_080346B0(iVar3);
        *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
        *(undefined *)(param_1 + 0xc0) = 0;
        return in_lr;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        sub_080177CC(param_1,0x6200,4,2);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      sub_080177F4(param_1);
      sub_080073A0(param_1 + 0x74,*(undefined4 *)(&DAT_0835c7f4 + *(char *)(param_1 + 0x71) * 4),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),0xffffffff);
      sVar1 = CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70));
      if (sVar1 == 0x1900) {
        return in_lr;
      }
      if (sVar1 == 0x1902) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_08017700(param_1,0x6201);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_0835c724);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

