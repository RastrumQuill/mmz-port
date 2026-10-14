// sub_080524EC at 0x080524EC (thumb)

undefined4 sub_080524EC(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int *local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa604);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + 0x6800;
    cVar1 = sub_08057A70(param_1);
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0xbc) + -0x9800;
    }
    else {
      local_24 = (int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0x60) = *local_24 + -0x8000;
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      for (uVar2 = (uVar2 * 2 >> 0x11 & 1) + 1; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        local_2c = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
        uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar3 & 0x7fffffff;
        local_28 = *local_24 + (uVar3 * 2 >> 0x11 & 0x1f) * 0x100 + -0x8800;
        sub_080B61B4(param_1,&local_2c,1,0);
      }
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    sub_080128D4(param_1);
  }
  pbVar5 = (byte *)(param_1 + 0xb6);
  if (((*pbVar5 & 2) == 0) || (cVar1 = sub_08057A70(param_1), cVar1 != '\0')) {
    bVar4 = *(char *)(param_1 + 0x12) + 4;
    *(byte *)(param_1 + 0x12) = bVar4;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x60) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 0x2a;
    if (0x3f < bVar4) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *pbVar5 = *pbVar5 & 0xfd;
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

