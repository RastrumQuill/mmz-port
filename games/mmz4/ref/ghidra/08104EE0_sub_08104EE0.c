// sub_08104EE0 at 0x08104EE0 (thumb)

undefined4 sub_08104EE0(int param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  int local_30;
  undefined4 local_2c;
  byte *local_28;
  char *local_24;
  
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    local_24 = (char *)(param_1 + 0xb6);
    if (*local_24 == '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      local_30 = *(int *)(iVar5 + 0xdc4) + -0x7800;
      local_2c = *(undefined4 *)(iVar5 + 0xdc8);
      bVar6 = 0;
      local_28 = (byte *)(param_1 + 0xb5);
      do {
        uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar2 & 0x7fffffff;
        cVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,5 - *(int *)(iVar5 + 0xdf4));
        cVar3 = '\0';
        uVar2 = 0;
        bVar6 = bVar6 + 1;
        if (cVar1 != -1) {
          do {
            if ((1 << uVar2 & *(uint *)(iVar5 + 0xdf0)) == 0) {
              cVar3 = cVar3 + '\x01';
            }
            uVar2 = uVar2 + 1 & 0xff;
          } while (cVar3 != (char)(cVar1 + '\x01'));
        }
        iVar5 = *(int *)(param_1 + 0x28);
        *(uint *)(iVar5 + 0xdf0) = *(uint *)(iVar5 + 0xdf0) | 1 << (uVar2 - 1 & 0xff);
        sub_08104A94(&local_30,
                     (uint)(byte)(&DAT_08868cfc)[*(int *)(iVar5 + 0xdf4) + (uint)*local_28 * 5] |
                     (uVar2 - 1) * 0x100 & 0xffff);
        if (*(int *)(*(int *)(param_1 + 0x28) + 0xdf4) == 0) {
          sub_08002B10(0x1a5);
        }
        iVar5 = *(int *)(param_1 + 0x28);
        *(int *)(iVar5 + 0xdf4) = *(int *)(iVar5 + 0xdf4) + 1;
      } while (bVar6 < 5);
      *local_24 = '\x01';
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xdf0) == 0) {
      *(undefined *)(param_1 + 0xb4) = 0;
      *local_24 = '\0';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08868ce4,param_1 + 0x54,0x80);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x8105081;
      sub_0801CF00(param_1,0xa900);
      pbVar4 = (byte *)(param_1 + 0xb5);
      bVar6 = *pbVar4;
      *pbVar4 = bVar6 + 1;
      if (3 < (byte)(bVar6 + 1)) {
        *pbVar4 = 0;
      }
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

