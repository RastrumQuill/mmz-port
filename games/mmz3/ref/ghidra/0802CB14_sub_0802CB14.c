// sub_0802CB14 at 0x0802CB14 (thumb)

undefined4 sub_0802CB14(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  puVar5 = (uint *)(param_1 + 0x218);
  if ((*puVar5 & 0x10) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x180;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((*puVar5 & 0x20) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x180;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  pbVar4 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
  if ((*puVar5 & 0x40) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x180;
  }
  if ((*puVar5 & 0x80) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x180;
  }
  sub_080263A0(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
  sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
  sVar2 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  cVar1 = *(char *)(param_1 + 0x120) + -1;
  *(char *)(param_1 + 0x120) = cVar1;
  if ((cVar1 == -1) || ((*puVar5 & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return in_lr;
}

