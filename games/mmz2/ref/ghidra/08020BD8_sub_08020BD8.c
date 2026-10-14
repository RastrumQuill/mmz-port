// sub_08020BD8 at 0x08020BD8 (thumb)

undefined8
sub_08020BD8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11,int param_12,undefined4 param_13)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  int *local_24;
  
  uVar3 = (uint)DAT_020011d2;
  if (uVar3 == 0) {
    uVar3 = 0xff;
  }
  else {
    if (param_5 == 0) {
      param_5 = *param_4;
    }
    if (param_6 == 0) {
      param_6 = param_4[1];
    }
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    sub_08022064(param_1,param_5,param_7,param_8,param_9,param_10,&local_44,&local_3c);
    local_24 = param_4 + 0x1e;
    local_28 = &DAT_08333b04 + param_12 * 4;
    puVar1 = (undefined4 *)(&DAT_08333b14 + param_12 * 4);
    puVar4 = &DAT_020011d6 + uVar3 * 0xc;
    iVar5 = uVar3 * 0x18;
    do {
      uVar3 = uVar3 - 1;
      if ((param_12 == 2) || ((puVar4[-0xc] & 0x8000) == 0)) {
        if (local_44 - (*(int *)(&DAT_020011c4 + iVar5) - ((uint)puVar4[-0xb] + local_3c)) <
            ((uint)puVar4[-0xb] + local_3c) * 2) {
          if (local_40 -
              ((*(int *)((int)&DAT_020011c8 + iVar5) + 1) - ((uint)puVar4[-10] + local_38)) <
              ((uint)puVar4[-10] + local_38) * 2) {
            sub_080EF124(local_34,local_30,local_2c,param_4,param_5,param_6,&local_44,&local_3c,
                         param_7,param_11,param_12,param_13,uVar3);
            goto LAB_08020d0c;
          }
          uVar2 = *puVar1;
        }
        else {
          uVar2 = *puVar1;
        }
        sub_080EF120(param_4,uVar3,param_13,uVar2);
      }
      else {
        sub_080EF120(param_4,uVar3,param_13,*puVar1);
      }
LAB_08020d0c:
      puVar4 = puVar4 + -0xc;
      iVar5 = iVar5 + -0x18;
    } while (uVar3 != 0);
    uVar3 = (uint)*(byte *)((int)local_24 + param_12);
  }
  return CONCAT44(in_lr,uVar3);
}

