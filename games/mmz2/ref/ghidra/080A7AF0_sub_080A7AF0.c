// sub_080A7AF0 at 0x080A7AF0 (thumb)

undefined4 sub_080A7AF0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6912);
    if ((*(uint *)(iVar3 + 0xb4) & 0x100) == 0) {
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
LAB_080a7c74:
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x73) == '\x04')) {
      sub_080127E4(param_1,0x6913);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  else {
    local_1c = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = local_1c;
    local_18 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = local_18;
    if ((*(uint *)(iVar3 + 0xb4) & 0x100) == 0) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x01';
      if ((byte)(cVar1 + 1U) < 0x10) goto LAB_080a7c74;
      if (*(char *)(param_1 + 0xb5) != '\0') {
        local_1c = local_1c + -0x700;
        sub_080B914C();
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    else {
      local_20 = sub_08008DE8(local_1c);
      if (-1 < local_20) goto LAB_080a7c74;
      local_20 = *(int *)(param_1 + 0x58) + local_20;
      *(int *)(param_1 + 0x58) = local_20;
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      local_24 = (uVar2 * 0x20 >> 0x15) + *(int *)(param_1 + 0x54) + -0x400;
      sub_080B8FC0(&local_24);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

