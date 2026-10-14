// sub_08099D9C at 0x08099D9C (thumb)

undefined4 sub_08099D9C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar5 + 0x31) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366ecc);
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x22) = 1;
      sub_08017700(param_1,0x3501);
      if (*(byte *)(param_1 + 0x12) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar3 = *(byte *)(param_1 + 0x12) & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x300 + 0x200;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffec0;
      *(undefined *)(param_1 + 0x13) = 0x3c;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      cVar2 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1e);
      *(char *)(param_1 + 0x13) = cVar2 + '\x1e';
      sub_08017700(param_1,0x3501);
    }
    iVar4 = *(int *)(param_1 + 0x5c) * 0xfe;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = sub_08009B28();
    if (iVar4 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x71) == '\x02') {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffec0;
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x300 + 0x200;
    }
    if (0x13000 < *(int *)(param_1 + 0x54) - 0xd000U) {
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined *)(iVar5 + 0x32) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08366e9c);
  }
  return in_lr;
}

