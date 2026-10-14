// sub_081011D4 at 0x081011D4 (thumb)

undefined4 sub_081011D4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CC9C(param_1);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_0801CF00(param_1,0x7702);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_081011e8_caseD_1:
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\x05') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + 0x100;
    }
    else if (cVar2 == '\n') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + -0x100;
      *(undefined *)(param_1 + 0x12) = 0;
    }
    uVar5 = *(byte *)(param_1 + 0x11) + 0x45;
    bVar1 = (&DAT_0202e8b4)[(int)uVar5 >> 3];
    uVar6 = uVar5 & 7;
    if (((int)(uint)bVar1 >> uVar6 & 1U) != 0) {
      if ((DAT_0202e924 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
        sub_080276A4(&DAT_0202e920,
                     *(undefined4 *)(&DAT_088482fc + (uint)*(byte *)(param_1 + 0x11) * 4),param_1);
LAB_0810130a:
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else {
        (&DAT_0202e8b4)[(int)uVar5 >> 3] = bVar1 & ~(byte)(1 << uVar6);
      }
    }
switchD_081011e8_caseD_5:
    sub_0801CFF0(param_1);
    return in_lr;
  case 1:
    goto switchD_081011e8_caseD_1;
  case 2:
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 1;
    goto LAB_08101304;
  case 3:
    sub_0801CF00(param_1,0x7704);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x180;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar3 = 2;
LAB_08101304:
    if ((bVar3 & bVar1) == 0) goto switchD_081011e8_caseD_5;
    goto LAB_0810130a;
  default:
    goto switchD_081011e8_caseD_5;
  }
}

