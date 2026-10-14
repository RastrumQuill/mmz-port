// sub_08052750 at 0x08052750 (thumb)

undefined4 sub_08052750(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_18 = *(int *)(param_1 + 0x54) + -0x800;
    local_14 = *(int *)(param_1 + 0x58) + 0x300;
    uVar2 = sub_08077FB0(param_1,&local_18,0,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    local_18 = *(int *)(param_1 + 0x54) + 0x900;
    local_14 = *(int *)(param_1 + 0x58) + 0x300;
    uVar2 = sub_08077FB0(param_1,&local_18,0,1);
    *(undefined4 *)(param_1 + 200) = uVar2;
    *(undefined *)(param_1 + 0xb7) = 0;
    sub_080127E4(param_1,0xa605);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  pbVar5 = (byte *)(param_1 + 0xb6);
  if (((*pbVar5 & 2) == 0) || (cVar1 = sub_08057A70(param_1), cVar1 != '\0')) {
    sub_080128D4(param_1);
    iVar3 = *(int *)(param_1 + 0xc4);
    pcVar4 = (char *)(param_1 + 0xb7);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0xd) == '\x05')) {
      *(undefined *)(iVar3 + 0xd) = 6;
      *pcVar4 = *pcVar4 + '\x01';
    }
    iVar3 = *(int *)(param_1 + 200);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0xd) == '\x05')) {
      *(undefined *)(iVar3 + 0xd) = 6;
      *pcVar4 = *pcVar4 + '\x01';
    }
    if (*pcVar4 == '\x02') {
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

