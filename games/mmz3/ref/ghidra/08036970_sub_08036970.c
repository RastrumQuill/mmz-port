// sub_08036970 at 0x08036970 (thumb)

undefined4 sub_08036970(int param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x27c) = 0;
    *(undefined *)(param_1 + 0x27d) = 0;
    sub_08017700(param_1,0);
    sub_08007390(param_1 + 0x74,&DAT_0835b468);
    *(undefined2 *)(param_1 + 0x288) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  psVar3 = (short *)(param_1 + 0x288);
  *psVar3 = *psVar3 + 1;
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 1) {
    if ((DAT_02002130 & 0x20) != 0) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    uVar1 = DAT_02002130;
    if ((DAT_02002130 & 0x10) != 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    if ((uVar1 & 2) == 0) {
      *(undefined *)(param_1 + 0x27c) = 0;
      *(undefined *)(param_1 + 0x27d) = 0;
    }
    else {
      if (*(byte *)(param_1 + 0x27c) < 0x28) {
        sVar2 = sub_080FE4D8(*psVar3,0x14);
        if (sVar2 == 0) {
          sub_0800471C(0x17);
        }
      }
      else {
        sVar2 = sub_080FE4D8(*psVar3,0x14);
        if (sVar2 == 0) {
          sub_0800471C(0x18);
        }
      }
      pbVar4 = (byte *)(param_1 + 0x27c);
      if (*pbVar4 == 10) {
        sub_080C7D28(param_1,param_1 + 0x54,0);
        sub_080C7D28(param_1,param_1 + 0x54,1);
      }
      if (*pbVar4 < 200) {
        *pbVar4 = *pbVar4 + 1;
      }
    }
  }
  if (0x28 < *(byte *)(param_1 + 0x27c)) {
    *(undefined *)(param_1 + 0x27d) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

