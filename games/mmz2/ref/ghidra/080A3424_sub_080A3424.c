// sub_080A3424 at 0x080A3424 (thumb)

undefined4 sub_080A3424(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A30A8(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x13) == '\0') {
      if ((DAT_0202ebbc & 2) == 0) {
        sub_080127E4(param_1,0x3900);
        sub_08006E08(param_1 + 0x74,&DAT_08344830);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x12) << 1;
      }
    }
    else {
      if ((DAT_0202ebbc & 2) == 0) {
        cVar2 = *(char *)(param_1 + 0x12) << 1;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x13) + -1;
      }
      *(char *)(param_1 + 0x13) = cVar2;
      if (*(char *)(param_1 + 0x13) == '\0') {
        sub_080127E4(param_1,0x3901);
        sub_08006E08(param_1 + 0x74,&DAT_08344860);
      }
    }
    sub_080128D4(param_1);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        sub_080128D4(param_1);
        bVar1 = *(byte *)(param_1 + 0x13);
        *(byte *)(param_1 + 0x13) = bVar1 + 1;
        if (0xf < bVar1) {
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x12) << 1;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
      goto LAB_080a3502;
    }
    if (bVar1 != 2) goto LAB_080a3502;
  }
  sub_080128D4(param_1);
LAB_080a3502:
  *(byte *)(param_1 + 0x49) =
       *(byte *)(param_1 + 0x49) & 0xf3 | (byte)((*(byte *)(iVar3 + 0x13) & 3) << 2);
  iVar6 = *(int *)(iVar3 + 0xb4);
  iVar4 = sub_080EF150(*(int *)(iVar3 + 0x54) - iVar6,6);
  iVar5 = sub_080EF150(*(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0xb8),6);
  *(uint *)(param_1 + 0x54) = iVar6 + iVar4 * (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x58) = *(int *)(iVar3 + 0xb8) + iVar5 * (uint)*(byte *)(param_1 + 0x12);
  return in_lr;
}

