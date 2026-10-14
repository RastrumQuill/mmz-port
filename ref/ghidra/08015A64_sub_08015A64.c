// sub_08015A64 at 0x08015A64 (thumb)

undefined8 sub_08015A64(uint param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = 0;
  local_40 = *param_3;
  local_3c = param_3[1];
  iVar2 = 0;
  bVar1 = *(byte *)(param_2 + 0x97) & 0xf0;
  if (bVar1 == 0x10) {
    iVar2 = 1;
  }
  else if (bVar1 == 0x20) {
    iVar2 = 2;
  }
  else if (bVar1 == 0x30) {
    iVar2 = 3;
  }
  if ((&DAT_082a7f14)[iVar2 + (param_1 & 0xff) * 4] != '\0') {
    if ((param_1 & 0xff) == 0) {
      if (iVar2 == 1) {
        iVar4 = sub_0809828C(param_2,&local_40,0x5a);
      }
      else if (iVar2 == 2) {
        local_40 = local_40 + 0x600;
        local_3c = local_3c + -0xc00;
        sub_080984F0(param_2,&local_40,0x5a);
        local_40 = local_40 + -0xe00;
        local_3c = local_3c + 0x600;
        sub_080984F0(param_2,&local_40,0x5a);
        local_40 = local_40 + 0x1000;
        local_3c = local_3c + 0x800;
        sub_080984F0(param_2,&local_40,0x5a);
        local_40 = local_40 + -0xa00;
        local_3c = local_3c + 0x200;
        sub_080984F0(param_2,&local_40,0x5a);
      }
      else if (iVar2 == 3) {
        local_40 = local_40 + 0x600;
        local_3c = local_3c + -0xc00;
        iVar4 = sub_080987B0(param_2,&local_40,0x5a);
        local_40 = local_40 + -0xe00;
        local_3c = local_3c + 0x600;
        sub_080987B0(param_2,&local_40,0x5a);
        local_40 = local_40 + 0x1000;
        local_3c = local_3c + 0x800;
        sub_080987B0(param_2,&local_40,0x5a);
        local_40 = local_40 + -0xa00;
        local_3c = local_3c + 0x200;
        sub_080987B0(param_2,&local_40,0x5a);
      }
    }
    else if (iVar2 == 1) {
      piVar3 = &DAT_082a7f5c;
      iVar2 = 6;
      do {
        local_38 = local_40 + *piVar3;
        local_34 = local_3c + piVar3[1];
        if (iVar4 == 0) {
          iVar4 = sub_0809828C(param_2,&local_38,0x1e);
        }
        else {
          sub_0809828C(param_2,&local_38,0x1e);
        }
        piVar3 = piVar3 + 2;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else if (iVar2 == 2) {
      piVar3 = &DAT_082a7f94;
      iVar2 = 3;
      do {
        local_30 = local_40 + *piVar3 + 0x600;
        local_2c = local_3c + piVar3[1] + -0xc00;
        sub_080984F0(param_2,&local_30,0x1e);
        local_30 = local_30 + -0xe00;
        local_2c = local_2c + 0x600;
        sub_080984F0(param_2,&local_30,0x1e);
        local_30 = local_30 + 0x1000;
        local_2c = local_2c + 0x800;
        sub_080984F0(param_2,&local_30,0x1e);
        local_30 = local_30 + -0xa00;
        local_2c = local_2c + 0x200;
        sub_080984F0(param_2,&local_30,0x1e);
        piVar3 = piVar3 + 2;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else if (iVar2 == 3) {
      piVar3 = &DAT_082a7f94;
      iVar2 = 3;
      do {
        local_28 = local_40 + *piVar3 + 0x600;
        local_24 = local_3c + piVar3[1] + -0xc00;
        if (iVar4 == 0) {
          iVar4 = sub_080987B0(param_2,&local_28,0x1e);
        }
        else {
          sub_080987B0(param_2,&local_28,0x1e);
        }
        local_28 = local_28 + -0xe00;
        local_24 = local_24 + 0x600;
        sub_080987B0(param_2,&local_28,0x1e);
        local_28 = local_28 + 0x1000;
        local_24 = local_24 + 0x800;
        sub_080987B0(param_2,&local_28,0x1e);
        local_28 = local_28 + -0xa00;
        local_24 = local_24 + 0x200;
        sub_080987B0(param_2,&local_28,0x1e);
        piVar3 = piVar3 + 2;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  return CONCAT44(in_lr,iVar4);
}

