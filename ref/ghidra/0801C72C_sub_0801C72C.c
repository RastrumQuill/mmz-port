// sub_0801C72C at 0x0801C72C (thumb)

undefined4 sub_0801C72C(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (param_2 == (undefined4 *)0x0) {
    sub_08016014(param_1);
    sub_0801747C(param_1);
    sub_080B43EC(param_1);
  }
  else {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    *(undefined4 *)(param_1 + 0x178) = *param_2;
    *(undefined4 *)(param_1 + 0x17c) = uVar3;
    *(undefined4 *)(param_1 + 0x180) = uVar4;
    *(undefined4 *)(param_1 + 0x184) = param_2[3];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    *(undefined4 *)(param_1 + 0x188) = param_2[4];
    *(undefined4 *)(param_1 + 0x18c) = uVar3;
    *(undefined4 *)(param_1 + 400) = uVar4;
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    *(undefined4 *)(param_1 + 0x194) = param_2[7];
    *(undefined4 *)(param_1 + 0x198) = uVar3;
    *(undefined4 *)(param_1 + 0x19c) = uVar4;
    *(undefined4 *)(param_1 + 0x1a0) = param_2[10];
    sub_080C8D70(param_1 + 0x1a4,param_2 + 0xb,100);
    sub_080B4518(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x17a) & 0x80;
  if ((*(byte *)(param_1 + 0x17a) & 0x80) != 0) {
    bVar1 = 1;
  }
  *(byte *)(param_1 + 0x10) = bVar1;
  uVar2 = sub_0801C5CC(param_1);
  *(undefined *)(param_1 + 0x114) = uVar2;
  sub_0801C5E8(param_1);
  if ((*(byte *)(param_1 + 0x1bb) & 0x10) != 0) {
    DAT_02022ae0 = DAT_02022ae0 | 0x20;
  }
  if ((*(byte *)(param_1 + 0x1be) & 0x20) != 0) {
    DAT_02022adf = DAT_02022adf | 0x40;
  }
  return in_lr;
}

