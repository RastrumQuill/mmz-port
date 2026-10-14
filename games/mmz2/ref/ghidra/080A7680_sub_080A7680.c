// sub_080A7680 at 0x080A7680 (thumb)

undefined4 sub_080A7680(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6a00);
    if ((*(uint *)(iVar4 + 0xb4) & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xb5) * 0x700 + -0x380;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_083451fc,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xb5) * 0x200 + -0x100;
      *(undefined4 *)(param_1 + 0x60) = 0x480;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
LAB_080a7794:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0x6a01);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if ((*(uint *)(iVar4 + 0xb4) & 0x80) == 0) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x01';
      if ((byte)(cVar1 + 1U) < 0x10) goto LAB_080a7794;
      bVar2 = *(byte *)(param_1 + 10);
    }
    else {
      iVar4 = sub_08008DE8(iVar3);
      if (-1 < iVar4) goto LAB_080a7794;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      bVar2 = *(byte *)(param_1 + 10);
    }
    *(byte *)(param_1 + 10) = bVar2 & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

