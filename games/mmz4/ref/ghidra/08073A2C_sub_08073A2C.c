// sub_08073A2C at 0x08073A2C (thumb)

void sub_08073A2C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_58 [8];
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  undefined auStack_40 [8];
  undefined4 local_38 [4];
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  
  sub_08128B5C(auStack_58,&DAT_08129280,8);
  sub_08128B5C(auStack_50,&DAT_08129288,8);
  sub_08128B5C(auStack_48,&DAT_08129290,8);
  sub_08128B5C(auStack_40,&DAT_08129298,8);
  local_28 = auStack_58;
  local_24 = auStack_50;
  local_20 = auStack_48;
  local_1c = auStack_40;
  sub_08128B5C(local_38,&local_28,0x10);
  iVar2 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar3 = *(int *)(param_1 + 0xcc);
  if (iVar2 < iVar3 + 0x3800) {
    iVar1 = 0;
  }
  else if (iVar2 < iVar3 + 0x6800) {
    iVar1 = 1;
  }
  else {
    iVar1 = 3;
    if (iVar2 < iVar3 + 0x9800) {
      iVar1 = 2;
    }
  }
  sub_08073D4C(local_38[iVar1],8);
  return;
}

