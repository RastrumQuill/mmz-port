// sub_080719B4 at 0x080719B4 (thumb)

undefined4 sub_080719B4(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar8 + 0xc) < 2) {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar6 & 0x7fffffff;
        uVar6 = uVar6 * 2 >> 0x11;
        uVar7 = uVar6 & 1;
        sub_080B0ACC(param_1 + 0x54,&DAT_08343a3c + (uVar6 & 1) * 0x1c,0,uVar7 << 4 | uVar7);
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + -0x3000;
      if (*(char *)(param_1 + 0xd) == '\0') {
        psVar5 = (short *)(param_1 + 0xc0);
        sVar1 = *psVar5;
        *psVar5 = sVar1 + 0x10;
        *(short *)(param_1 + 0x50) = sVar1 + 0x10;
        *(short *)(param_1 + 0x52) = *psVar5;
        *(uint *)(param_1 + 0x58) =
             *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x12) * 0x200;
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != -1) {
          return in_lr;
        }
        sub_08012580(param_1);
        sub_080127E4(param_1,0x1a00);
        sub_080128D4(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        bVar3 = *(byte *)(param_1 + 0x49);
        bVar4 = 0xc;
      }
      else {
        if (*(char *)(iVar8 + 0xbe) == '\x01') {
          sub_08006E08(param_1 + 0x74,&DAT_0833eeec);
          *(char *)(iVar8 + 0xbe) = '\x02';
        }
        if (*(char *)(param_1 + 0xd) != '\x01') {
          return in_lr;
        }
        if (*(char *)(iVar8 + 0xd) != '\x02') {
          return in_lr;
        }
        bVar3 = *(byte *)(param_1 + 0x49) & 0xf3;
        bVar4 = 8;
      }
      *(byte *)(param_1 + 0x49) = bVar3 | bVar4;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    sub_080032EC(0x3f);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08071B08(param_1);
  return in_lr;
}

