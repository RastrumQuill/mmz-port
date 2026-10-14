// sub_0803A584 at 0x0803A584 (thumb)

undefined8 sub_0803A584(int param_1,byte param_2,byte param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)param_3;
  if ((*(byte *)(param_1 + 0xfa) == 2) && (*(char *)(param_1 + 0x14f) != -1)) {
    *(byte *)(param_1 + 0xfa) = param_2;
    *(byte *)(param_1 + 0xc3) = param_3;
    uVar1 = sub_0803A614(param_1,(uint)param_2,uVar4);
    *(undefined *)(param_1 + 0xe6) = uVar1;
    if (*(byte *)(param_1 + 199) < 4) {
      uVar3 = *(int *)(&DAT_088501a0 + (uint)param_2 * 4) + uVar4;
      (&DAT_0202e8b4)[uVar3 >> 3] = (byte)(1 << (uVar3 & 7)) | (&DAT_0202e8b4)[uVar3 >> 3];
      uVar4 = *(int *)(&DAT_088501a0 + (uint)param_2 * 4) + uVar4;
      (&DAT_02035880)[uVar4 >> 3] = (byte)(1 << (uVar4 & 7)) | (&DAT_02035880)[uVar4 >> 3];
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

