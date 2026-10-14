// sub_080412BC at 0x080412BC (thumb)

undefined4 sub_080412BC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa200);
    *(undefined *)(param_1 + 0x12) = 0;
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    uVar2 = sub_080EF330(uVar4 * 2 >> 0x11,3);
    *(undefined *)(param_1 + 0x13) = uVar2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 7) == 0) {
      if (*(char *)(param_1 + 0xbf) == '\a') {
        puVar7 = &DAT_0833a28c;
        iVar5 = (uint)(bVar1 >> 3) + (uint)*(byte *)(param_1 + 0x13) * 6;
      }
      else {
        iVar5 = (uint)(bVar1 >> 3) + (uint)*(byte *)(param_1 + 0x13) * 6;
        puVar7 = &DAT_0833a29e;
      }
      piVar6 = (int *)(param_1 + 0xb4 + ((byte)puVar7[iVar5] + 4) * 4);
      *(undefined *)(*piVar6 + 0xd) = 0x1b;
      *(undefined *)(*piVar6 + 0xe) = 0;
    }
    iVar5 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    if (5 < (uint)(iVar5 * 0x1000000) >> 0x1b) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x16;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

