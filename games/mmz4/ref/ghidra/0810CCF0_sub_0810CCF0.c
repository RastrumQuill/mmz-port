// sub_0810CCF0 at 0x0810CCF0 (thumb)

ulonglong sub_0810CCF0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  do {
    iVar2 = param_1;
    if (param_1 < 0) {
      iVar2 = -param_1;
    }
    if (iVar2 < 0x8000) {
      iVar2 = param_2;
      if (param_2 < 0) {
        iVar2 = -param_2;
      }
      if (iVar2 < 0x8000) {
        if (param_1 == 0) {
          param_1 = 1;
        }
        if (param_2 == 0) {
          param_2 = 1;
        }
        uVar1 = sub_081284E0((int)(short)param_1,(int)(short)param_2);
        return CONCAT44(in_lr,(int)((uVar1 & 0xffff) + 0x80) >> 8) & 0xffffffff000000ff;
      }
    }
    if (param_1 < 0) {
      param_1 = param_1 + 0xf;
    }
    param_1 = param_1 >> 4;
    if (param_2 < 0) {
      param_2 = param_2 + 0xf;
    }
    param_2 = param_2 >> 4;
  } while( true );
}

