// sub_08021B80 at 0x08021B80 (thumb)

undefined8
sub_08021B80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_24;
  
  uVar3 = (uint)DAT_020011d2;
  if (uVar3 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0xff;
    puVar2 = &DAT_020011d6 + uVar3 * 0xc;
    local_24 = uVar3 * 0x18;
    do {
      uVar3 = uVar3 - 1;
      if ((((param_4 == 2) || ((puVar2[-0xc] & 0x8000) == 0)) &&
          (*param_1 - (*(int *)(&DAT_020011c4 + local_24) - (uint)puVar2[-0xb]) <
           (uint)puVar2[-0xb] << 1)) &&
         (param_1[1] - ((*(int *)((int)&DAT_020011c8 + local_24) + 1) - (uint)puVar2[-10]) <
          (uint)puVar2[-10] << 1)) {
        uVar1 = sub_080EF124(param_1,param_2,param_3,param_4,param_5,uVar3,uVar1);
        uVar1 = uVar1 & 0xff;
      }
      puVar2 = puVar2 + -0xc;
      local_24 = local_24 + -0x18;
    } while (uVar3 != 0);
  }
  return CONCAT44(in_lr,uVar1);
}

